#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "triton.h"
#include "log.h"
#include "radius_p.h"

#include "memdebug.h"

struct stat_accm_t {
	unsigned int interval;
	time_t timestamp;
	unsigned long cnt;
	unsigned long value;
};

struct stat_accm_t *stat_accm_create(unsigned int interval)
{
	struct stat_accm_t *m = _malloc(sizeof(*m));

	if (!m) {
		log_emerg("radius: out of memory\n");
		return NULL;
	}

	memset(m, 0, sizeof(*m));
	m->interval = interval;
	m->timestamp = time(NULL);

	return m;
}

void stat_accm_free(struct stat_accm_t *m)
{
	_free(m);
}

void stat_accm_add(struct stat_accm_t *m, unsigned int val)
{
	time_t ts = time(NULL);
	time_t diff = ts - m->timestamp;

	if (diff > m->interval) {
		m->timestamp = ts;
		m->cnt = 1;
		m->value = val;
		return;
	}

	m->value += val;
	m->cnt++;
}

unsigned long stat_accm_get_cnt(struct stat_accm_t *m)
{
	time_t ts = time(NULL);
	time_t diff = ts - m->timestamp;

	if (diff > m->interval) {
		m->timestamp = ts;
		m->cnt = 0;
		m->value = 0;
	}

	return m->cnt;
}

unsigned long stat_accm_get_avg(struct stat_accm_t *m)
{
	time_t ts = time(NULL);
	time_t diff = ts - m->timestamp;

	if (diff > m->interval) {
		m->timestamp = ts;
		m->cnt = 0;
		m->value = 0;
		return 0;
	}

	if (!m->cnt)
		return 0;

	return m->value / m->cnt;
}

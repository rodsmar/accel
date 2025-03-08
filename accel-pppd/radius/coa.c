// ...existing code...

static int process_coa_packet(struct rad_packet_t *pack, struct sockaddr_in *addr)
{
	struct rad_attr_t *attr;
	struct radius_pd_t *rpd = NULL;
	const char *sessionid = NULL;
	int res = 0;
	int force_disconnect = 0;
	struct ev_radius_t ev = {
		.request = pack,
	};
	struct ap_session *ses = NULL;
	
	// ...existing code...
	
	// Verifica se tem o atributo de desconexão forçada
	list_for_each_entry(attr, &pack->attrs, entry) {
		if (attr->vendor && attr->vendor->id == VENDOR_Mikrotik && 
			attr->attr->id == Mikrotik_Force_Disconnect) {
			if (attr->val.integer > 0) {
				force_disconnect = 1;
				log_info1("radius: CoA com Mikrotik-Force-Disconnect, aplicando mesmo para cliente autenticado por Access-Reject\n");
				break;
			}
		}
	}

	// Procura por atributos que possam identificar uma solicitação de desconexão
	list_for_each_entry(attr, &pack->attrs, entry) {
		if (!strcmp(attr->attr->name, "Session-Timeout") ||
		    !strcmp(attr->attr->name, "Idle-Timeout")) {
			if (rpd->reject_authenticated && !force_disconnect) {
				log_info1("radius: sessão %s autenticada por Access-Reject, ignorando timeout de CoA\n", sessionid);
				res = -1;
				goto out;
			}
		} else if (!strcmp(attr->attr->name, "Acct-Terminate-Cause")) {
			if (rpd->reject_authenticated && !force_disconnect) {
				log_info1("radius: sessão %s autenticada por Access-Reject, ignorando terminação de CoA\n", sessionid);
				res = -1;
				goto out;
			}
		}
	}
	
	// ...existing code...
	
out:
	// ...existing code...
}

// ...existing code...

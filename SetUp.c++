struct ibv_pd *pd = ibv_alloc_pd(verbs_context);
if (!pd) {
    /* error handling... */

struct ibv_cq_init_attr_ex cq_attr = {
    .cqe = num_entries, cq_context = my_context, ... };
struct ibv_cq_ex *cq = ibv_create_cq_ex(verbs_context, &cq_attr);
if (!cq)
{
    /* data */
};

}

void *buf = malloc(BUF_SIZE);
struct ibv_mr *mr = ibv_reg_mr(pd, buf, BUF_SIZE,
                                IBV_ACESS_LOCAL_WRITE);
{
    /* data */
};

struct rdma_event_channel *channel;
channel = rdma_create_event_channel();
if (!channel)
{
    /* error handling... */
};

struct rdma_addrinfo hints, *rai;
{
    /* data */
};

memset(&hints, 0, sizeof hints);
hints.ai_flags = RAI_PASSIVE;
hints.ai_port_space = RDMA_PS_TCP;
err = rdma_getaddrinfo(server_addr, port, &hints, &rai);

struct rdma_cm_id *listen_id;
err = rdma_create_id(channel, &listen_id, myctx, RDMA_PS_TCP);
err = rdma_bind_addr(listen_id, rai->ai_src_addr);
err = rdma_listen(listen_id, 0);
{
    /* events will be generated for incoming connection requests */
};

struct rdma_cm_id *cma_id;
err
{
    /* data */
};




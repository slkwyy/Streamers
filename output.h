#ifndef OUTPUT_H
#define OUTPUT_H

struct chunk;

void output_init(int bufsize);
void output_deliver(const struct chunk *c);

#endif	/* OUTPUT_H */

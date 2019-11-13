#if 0
	shc Version 3.8.9b, Generic Script Compiler
	Copyright (c) 1994-2015 Francisco Rosales <frosal@fi.upm.es>

	shc -v -r -T -f a.sh 
#endif

static  char data [] = 
#define      shll_z	10
#define      shll	((&data[1]))
	"\237\302\154\325\167\377\053\157\051\042\025\260\077"
#define      text_z	59
#define      text	((&data[25]))
	"\326\234\324\332\134\207\276\206\330\354\372\036\057\104\220\122"
	"\170\204\343\350\223\152\265\211\265\170\057\334\030\211\137\262"
	"\310\331\316\046\050\025\073\071\242\062\200\355\113\224\271\131"
	"\323\046\147\146\301\201\173\254\300\330\104\032\360\336\133\043"
	"\170\203\037\146\025\304\375\234\236\117\257\044"
#define      tst2_z	19
#define      tst2	((&data[93]))
	"\033\117\317\301\132\155\212\112\203\313\073\073\051\240\150\340"
	"\240\104\114\130\263\207\231\003\156"
#define      lsto_z	1
#define      lsto	((&data[114]))
	"\261"
#define      inlo_z	3
#define      inlo	((&data[115]))
	"\234\225\313"
#define      chk2_z	19
#define      chk2	((&data[120]))
	"\067\377\256\241\177\144\224\205\321\115\156\235\061\102\360\005"
	"\350\344\242\076\253\273\275\327\247"
#define      rlax_z	1
#define      rlax	((&data[143]))
	"\031"
#define      xecc_z	15
#define      xecc	((&data[145]))
	"\172\314\141\337\113\353\156\312\074\121\241\004\103\250\253\060"
	"\035\312\015"
#define      tst1_z	22
#define      tst1	((&data[163]))
	"\073\022\131\341\266\033\325\330\227\250\013\031\053\325\077\244"
	"\220\112\266\233\247\203\371\035\114\153\141"
#define      chk1_z	22
#define      chk1	((&data[193]))
	"\271\205\175\153\150\120\146\036\352\044\014\271\317\353\137\152"
	"\115\221\002\202\131\063\305\135\371"
#define      opts_z	1
#define      opts	((&data[215]))
	"\204"
#define      msg2_z	19
#define      msg2	((&data[218]))
	"\027\062\267\200\014\357\154\355\105\145\216\145\044\346\204\207"
	"\344\344\062\223\172\112"
#define      pswd_z	256
#define      pswd	((&data[272]))
	"\120\003\256\032\020\346\064\356\337\121\072\113\263\321\364\270"
	"\212\171\065\100\066\261\260\260\006\310\342\121\044\152\342\165"
	"\156\220\211\163\153\276\117\342\064\006\002\114\053\013\004\350"
	"\217\263\221\066\260\037\002\133\060\326\061\106\054\304\335\243"
	"\173\147\027\346\046\146\310\132\155\313\246\231\327\252\202\147"
	"\135\024\235\016\063\240\151\144\167\232\253\244\137\210\107\332"
	"\360\136\301\026\305\211\160\063\125\027\315\054\301\120\223\037"
	"\144\061\056\230\322\230\375\111\063\250\355\222\061\065\155\041"
	"\224\056\067\132\270\250\216\015\277\134\072\201\254\316\241\021"
	"\000\317\251\322\150\247\034\233\117\011\056\201\077\233\243\323"
	"\312\333\055\202\203\273\220\103\030\313\305\304\231\146\326\232"
	"\066\177\154\236\047\210\071\167\222\150\370\321\004\234\244\316"
	"\167\322\121\372\216\342\076\246\255\003\153\107\151\101\341\240"
	"\301\115\076\350\326\170\137\150\340\130\072\344\364\336\263\153"
	"\261\004\146\077\346\245\346\224\250\122\333\022\223\274\262\125"
	"\012\361\075\340\151\235\111\112\366\203\057\352\142\342\126\023"
	"\347\274\123\316\141\072\142\012\214\075\034\037\371\317\164\003"
	"\300\262\344\051\120\055\164\106\260\243\061\022\206\207\046\156"
	"\104\171\217\177\167\303\155\127\024\247\242\310\171\227\200\004"
	"\021\265\104\107\146\365\370\155\276\333\276\343\106\241\130\264"
	"\061\347\063\251\252\240"
#define      msg1_z	42
#define      msg1	((&data[572]))
	"\242\207\301\071\007\305\112\274\321\232\331\167\226\055\372\346"
	"\036\363\222\053\265\342\177\114\174\100\156\045\131\160\225\317"
	"\057\306\026\041\141\030\250\133\257\227\222\032\150\121\150\156"
	"\246\067\011\222\043"
#define      date_z	1
#define      date	((&data[617]))
	"\232"/* End of data[] */;
#define      hide_z	4096
#define DEBUGEXEC	0	/* Define as 1 to debug execvp calls */
#define TRACEABLE	1	/* Define as 1 to enable ptrace the executable */

/* rtc.c */

#include <sys/stat.h>
#include <sys/types.h>

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

/* 'Alleged RC4' */

static unsigned char stte[256], indx, jndx, kndx;

/*
 * Reset arc4 stte. 
 */
void stte_0(void)
{
	indx = jndx = kndx = 0;
	do {
		stte[indx] = indx;
	} while (++indx);
}

/*
 * Set key. Can be used more than once. 
 */
void key(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		do {
			tmp = stte[indx];
			kndx += tmp;
			kndx += ptr[(int)indx % len];
			stte[indx] = stte[kndx];
			stte[kndx] = tmp;
		} while (++indx);
		ptr += 256;
		len -= 256;
	}
}

/*
 * Crypt data. 
 */
void arc4(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		indx++;
		tmp = stte[indx];
		jndx += tmp;
		stte[indx] = stte[jndx];
		stte[jndx] = tmp;
		tmp += stte[indx];
		*ptr ^= stte[tmp];
		ptr++;
		len--;
	}
}

/* End of ARC4 */

/*
 * Key with file invariants. 
 */
int key_with_file(char * file)
{
	struct stat statf[1];
	struct stat control[1];

	if (stat(file, statf) < 0)
		return -1;

	/* Turn on stable fields */
	memset(control, 0, sizeof(control));
	control->st_ino = statf->st_ino;
	control->st_dev = statf->st_dev;
	control->st_rdev = statf->st_rdev;
	control->st_uid = statf->st_uid;
	control->st_gid = statf->st_gid;
	control->st_size = statf->st_size;
	control->st_mtime = statf->st_mtime;
	control->st_ctime = statf->st_ctime;
	key(control, sizeof(control));
	return 0;
}

#if DEBUGEXEC
void debugexec(char * sh11, int argc, char ** argv)
{
	int i;
	fprintf(stderr, "shll=%s\n", sh11 ? sh11 : "<null>");
	fprintf(stderr, "argc=%d\n", argc);
	if (!argv) {
		fprintf(stderr, "argv=<null>\n");
	} else { 
		for (i = 0; i <= argc ; i++)
			fprintf(stderr, "argv[%d]=%.60s\n", i, argv[i] ? argv[i] : "<null>");
	}
}
#endif /* DEBUGEXEC */

void rmarg(char ** argv, char * arg)
{
	for (; argv && *argv && *argv != arg; argv++);
	for (; argv && *argv; argv++)
		*argv = argv[1];
}

int chkenv(int argc)
{
	char buff[512];
	unsigned long mask, m;
	int l, a, c;
	char * string;
	extern char ** environ;

	mask  = (unsigned long)&chkenv;
	mask ^= (unsigned long)getpid() * ~mask;
	sprintf(buff, "x%lx", mask);
	string = getenv(buff);
#if DEBUGEXEC
	fprintf(stderr, "getenv(%s)=%s\n", buff, string ? string : "<null>");
#endif
	l = strlen(buff);
	if (!string) {
		/* 1st */
		sprintf(&buff[l], "=%lu %d", mask, argc);
		putenv(strdup(buff));
		return 0;
	}
	c = sscanf(string, "%lu %d%c", &m, &a, buff);
	if (c == 2 && m == mask) {
		/* 3rd */
		rmarg(environ, &string[-l - 1]);
		return 1 + (argc - a);
	}
	return -1;
}

#if !TRACEABLE

#define _LINUX_SOURCE_COMPAT
#include <sys/ptrace.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <signal.h>
#include <stdio.h>
#include <unistd.h>

#if !defined(PTRACE_ATTACH) && defined(PT_ATTACH)
#	define PTRACE_ATTACH	PT_ATTACH
#endif
void untraceable(char * argv0)
{
	char proc[80];
	int pid, mine;

	switch(pid = fork()) {
	case  0:
		pid = getppid();
		/* For problematic SunOS ptrace */
#if defined(__FreeBSD__)
		sprintf(proc, "/proc/%d/mem", (int)pid);
#else
		sprintf(proc, "/proc/%d/as",  (int)pid);
#endif
		close(0);
		mine = !open(proc, O_RDWR|O_EXCL);
		if (!mine && errno != EBUSY)
			mine = !ptrace(PTRACE_ATTACH, pid, 0, 0);
		if (mine) {
			kill(pid, SIGCONT);
		} else {
			perror(argv0);
			kill(pid, SIGKILL);
		}
		_exit(mine);
	case -1:
		break;
	default:
		if (pid == waitpid(pid, 0, 0))
			return;
	}
	perror(argv0);
	_exit(1);
}
#endif /* !TRACEABLE */

char * xsh(int argc, char ** argv)
{
	char * scrpt;
	int ret, i, j;
	char ** varg;
	char * me = argv[0];

	stte_0();
	 key(pswd, pswd_z);
	arc4(msg1, msg1_z);
	arc4(date, date_z);
	if (date[0] && (atoll(date)<time(NULL)))
		return msg1;
	arc4(shll, shll_z);
	arc4(inlo, inlo_z);
	arc4(xecc, xecc_z);
	arc4(lsto, lsto_z);
	arc4(tst1, tst1_z);
	 key(tst1, tst1_z);
	arc4(chk1, chk1_z);
	if ((chk1_z != tst1_z) || memcmp(tst1, chk1, tst1_z))
		return tst1;
	ret = chkenv(argc);
	arc4(msg2, msg2_z);
	if (ret < 0)
		return msg2;
	varg = (char **)calloc(argc + 10, sizeof(char *));
	if (!varg)
		return 0;
	if (ret) {
		arc4(rlax, rlax_z);
		if (!rlax[0] && key_with_file(shll))
			return shll;
		arc4(opts, opts_z);
		arc4(text, text_z);
		arc4(tst2, tst2_z);
		 key(tst2, tst2_z);
		arc4(chk2, chk2_z);
		if ((chk2_z != tst2_z) || memcmp(tst2, chk2, tst2_z))
			return tst2;
		/* Prepend hide_z spaces to script text to hide it. */
		scrpt = malloc(hide_z + text_z);
		if (!scrpt)
			return 0;
		memset(scrpt, (int) ' ', hide_z);
		memcpy(&scrpt[hide_z], text, text_z);
	} else {			/* Reexecute */
		if (*xecc) {
			scrpt = malloc(512);
			if (!scrpt)
				return 0;
			sprintf(scrpt, xecc, me);
		} else {
			scrpt = me;
		}
	}
	j = 0;
	varg[j++] = argv[0];		/* My own name at execution */
	if (ret && *opts)
		varg[j++] = opts;	/* Options on 1st line of code */
	if (*inlo)
		varg[j++] = inlo;	/* Option introducing inline code */
	varg[j++] = scrpt;		/* The script itself */
	if (*lsto)
		varg[j++] = lsto;	/* Option meaning last option */
	i = (ret > 1) ? ret : 0;	/* Args numbering correction */
	while (i < argc)
		varg[j++] = argv[i++];	/* Main run-time arguments */
	varg[j] = 0;			/* NULL terminated array */
#if DEBUGEXEC
	debugexec(shll, j, varg);
#endif
	execvp(shll, varg);
	return shll;
}

int main(int argc, char ** argv)
{
#if DEBUGEXEC
	debugexec("main", argc, argv);
#endif
#if !TRACEABLE
	untraceable(argv[0]);
#endif
	argv[1] = xsh(argc, argv);
	fprintf(stderr, "%s%s%s: %s\n", argv[0],
		errno ? ": " : "",
		errno ? strerror(errno) : "",
		argv[1] ? argv[1] : "<null>"
	);
	return 1;
}

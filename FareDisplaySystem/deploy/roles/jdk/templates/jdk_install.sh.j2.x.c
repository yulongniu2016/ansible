#if 0
	shc Version 3.8.9b, Generic Script Compiler
	Copyright (c) 1994-2015 Francisco Rosales <frosal@fi.upm.es>

	shc -v -r -T -f jdk/templates/jdk_install.sh.j2 
#endif

static  char data [] = 
#define      chk1_z	22
#define      chk1	((&data[3]))
	"\022\315\163\002\036\023\360\114\344\321\172\120\042\132\344\041"
	"\241\371\343\276\355\155\132\155\222\316"
#define      lsto_z	1
#define      lsto	((&data[26]))
	"\003"
#define      tst1_z	22
#define      tst1	((&data[29]))
	"\206\003\036\051\074\030\166\073\334\036\321\252\176\272\236\346"
	"\130\351\205\232\207\151\265\324\001\246\166"
#define      text_z	408
#define      text	((&data[57]))
	"\070\146\066\267\012\255\177\311\254\140\254\255\104\376\341\345"
	"\064\141\364\140\337\060\050\124\266\357\354\065\220\024\066\057"
	"\130\073\075\246\113\044\124\036\252\052\022\155\270\023\211\230"
	"\200\037\173\063\065\071\242\212\260\300\166\117\263\046\072\125"
	"\103\352\215\232\232\104\003\320\017\035\141\231\117\140\265\041"
	"\001\010\174\320\226\065\246\217\035\101\073\041\010\361\122\215"
	"\160\311\053\230\226\233\154\001\311\075\236\017\070\207\363\322"
	"\243\106\111\036\037\376\277\352\232\260\166\230\014\226\076\317"
	"\150\002\010\220\312\223\352\223\065\330\226\203\272\151\371\017"
	"\256\035\226\174\340\140\007\202\113\140\356\262\317\320\147\151"
	"\141\137\265\356\116\117\152\371\163\320\110\143\246\335\175\210"
	"\102\130\020\326\345\002\013\337\355\101\007\046\244\266\110\017"
	"\007\143\155\347\005\201\064\215\310\212\317\106\072\262\150\160"
	"\345\323\252\313\133\302\151\227\162\265\255\030\207\207\114\005"
	"\343\146\326\224\000\335\036\022\363\142\064\214\252\063\163\227"
	"\126\043\351\053\370\123\364\011\044\336\155\226\117\274\121\276"
	"\311\337\254\033\316\116\377\244\111\105\246\020\267\017\104\012"
	"\214\377\344\171\253\243\134\145\037\133\320\326\223\334\212\316"
	"\203\241\207\352\332\155\355\122\116\221\213\224\130\232\345\007"
	"\060\361\115\253\306\227\022\233\215\036\325\021\215\170\134\022"
	"\023\070\312\336\063\075\057\217\255\022\251\363\125\315\202\311"
	"\210\346\137\050\360\145\110\271\215\054\110\106\042\053\125\144"
	"\374\253\052\114\065\341\244\114\252\106\253\042\117\203\313\232"
	"\071\353\353\063\036\117\142\204\042\052\160\377\164\050\362\130"
	"\226\207\110\222\377\230\323\042\047\126\161\350\251\014\013\037"
	"\342\362\110\105\363\003\362\063\342\151\211\246\367\365\363\262"
	"\024\070\075\260\201\120\175\364\036\350\176\031\130\367\240\337"
	"\373\241\206\161\160\217\046\251\365\135\117\355\123\103\240\147"
	"\173\336\027\374\056\225\361\115\175\157\147\326\147\007\265\142"
	"\251\074\324\032\313\372\304\301\130\023\257\253\127\117\023\323"
	"\055\053\320"
#define      xecc_z	15
#define      xecc	((&data[540]))
	"\252\076\061\063\030\072\071\142\213\251\255\324\145\124\242\002"
	"\164\125\021\024\231"
#define      msg1_z	42
#define      msg1	((&data[566]))
	"\303\006\320\335\322\313\241\223\313\213\377\235\013\042\232\053"
	"\023\107\373\107\026\047\047\035\162\323\176\127\232\151\042\244"
	"\025\170\152\160\076\235\203\213\045\364\052\021\306\141\324\321"
	"\236\072\043\265\103\317\015\222\343\340\300\016"
#define      rlax_z	1
#define      rlax	((&data[618]))
	"\026"
#define      msg2_z	19
#define      msg2	((&data[622]))
	"\243\331\042\145\173\276\365\116\062\146\010\057\246\252\106\216"
	"\032\072\133\363\175\000"
#define      shll_z	10
#define      shll	((&data[643]))
	"\070\265\024\276\227\203\155\334\253\372\106\042\363\011"
#define      opts_z	1
#define      opts	((&data[655]))
	"\354"
#define      inlo_z	3
#define      inlo	((&data[656]))
	"\116\257\030"
#define      tst2_z	19
#define      tst2	((&data[662]))
	"\367\060\252\257\261\251\323\003\270\203\161\221\251\164\100\233"
	"\315\257\125\120\002\116\327\361\271"
#define      chk2_z	19
#define      chk2	((&data[684]))
	"\046\341\307\200\366\367\253\004\023\026\015\072\147\023\301\046"
	"\375\377\022\372\326"
#define      pswd_z	256
#define      pswd	((&data[745]))
	"\271\332\242\246\023\127\232\034\352\140\361\037\272\351\011\130"
	"\260\001\210\132\331\171\023\141\210\234\133\136\063\371\016\354"
	"\323\260\222\347\010\054\004\363\163\212\040\175\252\274\320\005"
	"\017\246\233\372\241\321\366\324\311\216\360\012\273\211\170\023"
	"\223\266\334\325\056\110\054\242\323\115\040\175\011\360\202\031"
	"\227\036\024\070\357\012\014\271\230\374\304\124\206\074\147\031"
	"\363\104\357\041\215\033\304\140\151\344\336\163\325\141\215\154"
	"\177\241\244\157\254\260\051\105\255\355\231\063\051\001\115\035"
	"\106\074\076\323\130\002\064\301\347\023\064\274\164\301\051\364"
	"\143\315\144\017\176\215\125\053\173\356\137\245\360\254\302\066"
	"\351\001\012\101\003\077\003\353\122\067\247\307\371\320\274\134"
	"\236\040\154\034\256\301\110\051\260\247\316\240\124\221\327\075"
	"\222\341\177\226\040\202\201\163\272\051\072\263\372\366\017\230"
	"\027\174\265\305\075\376\357\356\246\276\216\372\117\145\070\342"
	"\107\267\170\150\072\371\334\364\042\026\247\034\015\267\265\045"
	"\063\153\353\161\151\332\137\017\231\356\012\351\123\102\313\233"
	"\372\103\003\064\075\337\050\137\366\320\174\004\207\062\052\273"
	"\235\025\054\006\360\214\025\211\172\037\163\316\142\076\151\135"
	"\201\155\221\276\115\272\036\104\215\365\022\107\336\034\237\217"
	"\036\050\352\367\242\376\130\052\232\263\211\315\254\230\271\200"
	"\110\114\150\121\171\154\104\006\142\126\116\101\163\355\320\221"
	"\026\273\210\270"
#define      date_z	1
#define      date	((&data[1045]))
	"\126"/* End of data[] */;
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

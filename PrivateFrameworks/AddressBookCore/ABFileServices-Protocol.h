//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol ABFileServices <NSObject>
- (NSString *)NSTemporaryDirectory;
- (int)dlclose:(void *)arg1;
- (void *)dlsym:(void *)arg1:(const char *)arg2;
- (void *)dlopen:(const char *)arg1:(int)arg2;
- (int)fcntl_flock:(int)arg1:(int)arg2:(struct flock *)arg3;
- (int)flock:(int)arg1:(int)arg2;
- (int)fstatfs:(int)arg1:(struct statfs *)arg2;
- (int)statfs:(const char *)arg1:(struct statfs *)arg2;
- (int)close:(int)arg1;
- (int)open:(const char *)arg1:(int)arg2:(unsigned short)arg3;
- (int)errnoValue;
@end


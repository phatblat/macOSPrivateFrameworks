//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface _PASTempfileDescr : NSObject <NSCopying>
{
    int _fd;
    NSString *_path;
}

+ (id)tempfileDescrWithFd:(int)arg1 path:(id)arg2;
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
@property(readonly, nonatomic) int fd; // @synthesize fd=_fd;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToTempfileDescr:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFd:(int)arg1 path:(id)arg2;

@end


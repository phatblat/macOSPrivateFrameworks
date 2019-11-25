//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import "NSCopying.h"

@class HMFActivity, NSData, NSDictionary;

__attribute__((visibility("hidden")))
@interface HMFHTTPResponseInternal : HMFObject <NSCopying>
{
    HMFActivity *_activity;
    long long _statusCode;
    NSDictionary *_headerFields;
    NSData *_body;
}

@property(copy, nonatomic) NSData *body; // @synthesize body=_body;
@property(copy, nonatomic) NSDictionary *headerFields; // @synthesize headerFields=_headerFields;
@property(readonly, nonatomic) long long statusCode; // @synthesize statusCode=_statusCode;
@property(retain, nonatomic) HMFActivity *activity; // @synthesize activity=_activity;
- (void).cxx_destruct;
- (void)setHeaderValue:(id)arg1 forHeaderKey:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStatusCode:(long long)arg1 headerFields:(id)arg2 body:(id)arg3;
- (id)init;

@end


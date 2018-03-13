//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface CATAddress : NSObject
{
    NSString *_address;
    NSData *_data;
}

+ (id)localWiFi;
+ (id)any;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToAddress:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithString:(id)arg1;
@property(readonly, nonatomic, getter=isLocalWiFi) BOOL localWiFi;
@property(readonly, nonatomic, getter=isAny) BOOL any;
@property(readonly, nonatomic) NSString *address; // @synthesize address=_address;

@end


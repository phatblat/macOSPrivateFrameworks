//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSError;

@interface HUSimpleMessage : NSObject
{
    NSDictionary *_payload;
    NSError *_error;
}

+ (id)messageWithPayload:(id)arg1;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSDictionary *payload; // @synthesize payload=_payload;
- (void).cxx_destruct;
- (id)description;
- (id)initWithPayload:(id)arg1;

@end


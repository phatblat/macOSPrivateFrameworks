//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKitDaemon/HMDStreamDataChunk.h>

@class NSString;

@interface HMDInitialStreamDataChunk : HMDStreamDataChunk
{
    NSString *_type;
}

@property(readonly, copy) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)attributeDescriptions;
- (id)initWithStreamDataDictionary:(id)arg1;
- (id)initWithData:(id)arg1 isLast:(BOOL)arg2 type:(id)arg3;

@end

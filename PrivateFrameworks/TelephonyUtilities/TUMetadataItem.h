//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface TUMetadataItem : NSObject
{
    NSMutableDictionary *_callMetadata;
}

@property(readonly, nonatomic) NSMutableDictionary *callMetadata; // @synthesize callMetadata=_callMetadata;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isEmpty) BOOL empty;
- (id)description;
- (id)metadataForProvider:(Class)arg1;
- (void)setMetadata:(id)arg1 forProvider:(Class)arg2;
- (id)init;

@end

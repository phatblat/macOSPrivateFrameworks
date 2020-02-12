//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Montreal/MontrealNNDescription.h>

#import "MontrealNNDescriptionProtocol.h"

@class NSNumber, NSString;

@interface MontrealNNModelQuantization : MontrealNNDescription <MontrealNNDescriptionProtocol>
{
    NSString *_weightStorage;
    NSNumber *_weightStorageRange;
}

@property(readonly) NSNumber *weightStorageRange; // @synthesize weightStorageRange=_weightStorageRange;
@property(readonly) NSString *weightStorage; // @synthesize weightStorage=_weightStorage;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


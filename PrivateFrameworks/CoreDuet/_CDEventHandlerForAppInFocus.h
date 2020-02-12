//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_CDEventHandlerDelegate.h"

@class NSString, _CDDataCollectionAnonymizer, _CDFileUtility;

@interface _CDEventHandlerForAppInFocus : NSObject <_CDEventHandlerDelegate>
{
    _CDDataCollectionAnonymizer *_anonymizer;
    _CDFileUtility *_utility;
}

@property(retain, nonatomic) _CDFileUtility *utility; // @synthesize utility=_utility;
@property(retain, nonatomic) _CDDataCollectionAnonymizer *anonymizer; // @synthesize anonymizer=_anonymizer;
- (void).cxx_destruct;
- (void)eventHandler:(id)arg1 withFileHandle:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


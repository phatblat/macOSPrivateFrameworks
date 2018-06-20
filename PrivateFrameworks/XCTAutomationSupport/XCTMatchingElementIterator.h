//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XCTMatchingElementIterator.h"

@class NSEnumerator, NSSet, NSString, XCElementSnapshot;

@interface XCTMatchingElementIterator : NSObject <XCTMatchingElementIterator>
{
    NSEnumerator *_outputEnumerator;
    XCElementSnapshot *_input;
    id <XCTElementSetTransformer> _transformer;
    XCElementSnapshot *_currentMatch;
    NSSet *_currentRelatedElements;
}

@property(retain) NSSet *currentRelatedElements; // @synthesize currentRelatedElements=_currentRelatedElements;
@property(retain) XCElementSnapshot *currentMatch; // @synthesize currentMatch=_currentMatch;
@property(readonly) id <XCTElementSetTransformer> transformer; // @synthesize transformer=_transformer;
@property(readonly) XCElementSnapshot *input; // @synthesize input=_input;
- (void).cxx_destruct;
- (id)nextMatch;
- (id)initWithInput:(id)arg1 transformer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


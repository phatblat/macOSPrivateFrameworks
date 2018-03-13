//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <XMPPCore/XMPPNode.h>

@class NSMutableArray, NSMutableString;

@interface XMPPXMLNode : XMPPNode
{
    NSMutableArray *_elements;
    NSMutableString *_curText;
}

- (id)dataWithHexString;
- (unsigned int)unsignedIntValue;
- (int)intValue;
- (id)trimmedStringValue;
- (id)text;
- (id)elements;
- (id)firstElementWithNamespace:(id)arg1;
- (id)firstElementWithNamespace:(id)arg1 tag:(id)arg2;
- (id)firstElementNamed:(id)arg1;
- (id)elementsNamed:(id)arg1;
- (id)firstElementWithNamespace:(id)arg1 named:(id)arg2;
- (id)elementsWithNamespace:(id)arg1 named:(id)arg2;
- (void)finished;
- (void)childFinished:(id)arg1;
- (void)addText:(id)arg1;
- (id)newChildWithName:(id)arg1 attributes:(id)arg2;
- (void)_finishText;
- (id)description;
- (void)dealloc;
- (id)initWithName:(id)arg1 attributes:(id)arg2;
- (id)mucJIDAssociation;
- (int)mucAffiliation;
- (int)mucRole;
- (int)mucStatus;
- (id)_itemNode;

@end


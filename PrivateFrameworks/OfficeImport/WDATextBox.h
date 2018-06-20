//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, WDAContent, WDDocument, WDText;

@interface WDATextBox : NSObject
{
    WDText *mText;
    unsigned long long mNextTextBoxId;
    _Bool mOle;
    WDDocument *mDocument;
    WDAContent *mParent;
    BOOL _isMultiColumn;
    NSNumber *_flowSequence;
    NSNumber *_flowId;
}

@property BOOL isMultiColumn; // @synthesize isMultiColumn=_isMultiColumn;
@property(retain) NSNumber *flowId; // @synthesize flowId=_flowId;
@property(retain) NSNumber *flowSequence; // @synthesize flowSequence=_flowSequence;
- (void).cxx_destruct;
- (id)description;
- (void)setNextTextBoxId:(unsigned long long)arg1;
- (unsigned long long)nextTextBoxId;
- (void)setText:(id)arg1;
- (id)text;
- (void)setParent:(id)arg1;
- (id)parent;
- (void)setOle:(BOOL)arg1;
- (BOOL)isOle;
- (void)setDocument:(id)arg1;
- (id)document;
- (id)init;

@end


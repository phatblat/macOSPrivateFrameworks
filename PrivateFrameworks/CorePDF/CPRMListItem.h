//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CPRMListItem : NSObject
{
    struct CGPDFNode **_paragraphs;
    unsigned long long _count;
    unsigned long long _pos;
}

@property(readonly) struct CGPDFNode **paragraphNodes; // @synthesize paragraphNodes=_paragraphs;
- (struct CGRect)bounds;
@property(readonly) struct CGPDFPage *page; // @dynamic page;
- (void)addParagraph:(struct CGPDFNode *)arg1;
- (void)dealloc;
- (id)initWithCount:(unsigned long long)arg1;

@end


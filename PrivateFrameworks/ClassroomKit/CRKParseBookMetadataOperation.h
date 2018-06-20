//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CATOperation.h"

@class CRKBook;

@interface CRKParseBookMetadataOperation : CATOperation
{
    BOOL mParseImage;
    CRKBook *_book;
}

@property(readonly, nonatomic) CRKBook *book; // @synthesize book=_book;
- (void).cxx_destruct;
- (void)parseBookContentsOperationDidFinish:(id)arg1;
- (void)parseContentsFilePathOperationDidFinish:(id)arg1;
- (void)main;
- (BOOL)isAsynchronous;
- (id)initWithBook:(id)arg1 parseImage:(BOOL)arg2;

@end


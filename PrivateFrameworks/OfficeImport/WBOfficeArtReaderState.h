//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/OABReaderState.h>

@class WBReader, WXReadState;

__attribute__((visibility("hidden")))
@interface WBOfficeArtReaderState : OABReaderState
{
    WBReader *mReader;
    int mCurrentTextType;
    WXReadState *mXmlDocumentState;
}

@property(nonatomic) int currentTextType; // @synthesize currentTextType=mCurrentTextType;
@property(nonatomic) WBReader *reader; // @synthesize reader=mReader;
- (id)xmlDrawingState;
- (void)dealloc;
- (id)initWithClient:(Class)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/CMMapper.h>

#import "CMMapperRoot.h"

@class NSMutableArray, NSString, OIXMLDocument, OIXMLElement, PDPresentation;

__attribute__((visibility("hidden")))
@interface PMPresentationMapper : CMMapper <CMMapperRoot>
{
    int mWidth;
    NSMutableArray *mSlideNames;
    NSMutableArray *mSlideGuids;
    NSString *mResourceUrlPrefix;
    NSString *mResourceUrlProtocol;
    OIXMLDocument *mXhtmlDoc;
    OIXMLElement *mBodyElement;
    unsigned int mNextCommit;
    unsigned int mCurrentSlide;
    BOOL mHasPushedFirstSlides;
}

- (void).cxx_destruct;
- (void)finishMappingWithState:(id)arg1;
- (void)mapElement:(id)arg1 atIndex:(unsigned long long)arg2 withState:(id)arg3 isLastElement:(BOOL)arg4;
- (void)_pushEmptySlideWithMessage:(id)arg1;
- (void)startMappingWithState:(id)arg1;
- (struct CGSize)slideSize;
- (struct CGSize)pageSizeForDevice;
- (id)documentTitle;
- (id)blipAtIndex:(unsigned int)arg1;
- (id)initWithDocument:(id)arg1 archiver:(id)arg2;
- (void)setHtmlDocumentSizeInArchiver;

// Remaining properties
@property(readonly) PDPresentation *document; // @dynamic document;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/OABReaderState.h>

@class PBPresentationReaderState, PXPresentationState;

@interface PBOfficeArtReaderState : OABReaderState
{
    PBPresentationReaderState *mPresentationState;
    PXPresentationState *mXmlDocumentState;
}

- (void).cxx_destruct;
- (id)drawableOnTgtSlideForShapeId:(int)arg1;
- (id)xmlDocumentState;
- (id)xmlDrawingState;
- (id)presentationState;
- (id)initWithPresentationState:(id)arg1;

@end


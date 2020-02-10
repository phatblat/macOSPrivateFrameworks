//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QLPreviewViewDelegate.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface FI_TQLMultiPreviewViewCommonDelegate : NSObject <QLPreviewViewDelegate>
{
    struct TFENode _browserTargetNode;
}

@property struct TFENode browserTargetNode; // @synthesize browserTargetNode=_browserTargetNode;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)previewView:(id)arg1 draggingItemsForPreviewItem:(id)arg2;
- (id)previewView:(id)arg1 pasteboardWriterForPreviewItem:(id)arg2;
- (BOOL)previewView:(id)arg1 acceptDrop:(id)arg2 onPreviewItem:(id)arg3;
- (unsigned long long)previewView:(id)arg1 validateDrop:(id)arg2 onPreviewItem:(id)arg3;
- (id)createMultiPreviewView:(id)arg1 forPreviewItem:(id)arg2;
- (id)newPasteboardWriterForNode:(const struct TFENode *)arg1 inPreviewView:(id)arg2;
- (id)findMultiPreviewViewInPreviewView:(id)arg1;
- (_Bool)isAllowedToDragNodes:(const struct TFENodeVector *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

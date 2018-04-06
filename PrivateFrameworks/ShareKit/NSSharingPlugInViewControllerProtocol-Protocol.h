//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CALayer, NSImage, NSItemProvider, NSView;

@protocol NSSharingPlugInViewControllerProtocol <NSObject>

@optional
@property(getter=isPreviewImageVisible) BOOL previewImageVisible;
@property(retain) NSImage *previewImage;
- (void)_addViewToContainerView:(NSView *)arg1;
- (struct CGRect)imageContentFrameForItemProvider:(NSItemProvider *)arg1;
- (struct CGRect)imageFrameForItemProvider:(NSItemProvider *)arg1;
- (NSImage *)imageForItemProvider:(NSItemProvider *)arg1;
- (CALayer *)previewImageLayer;
@end

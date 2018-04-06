//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol MUContentViewControllerProtocol <NSObject>
@property BOOL contentViewControllerCropEnabled;
- (struct CGSize)idealContentSizeForScreenSize:(struct CGSize)arg1 windowDecorationSize:(struct CGSize)arg2;
- (struct CGSize)contentSize;
- (struct CGRect)borderFrame;
- (struct CGRect)contentRect;
- (void)loadContentWithCompletionBlock:(void (^)(void))arg1;
- (void)uninstallAllAnnotationControllerOverlays;
- (void)teardown;
- (void)setup;
@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, SOStickerViewerController;

@protocol SOStickerViewerControllerDelegate <NSObject>
- (void)stickerViewerController:(SOStickerViewerController *)arg1 willDeleteStickers:(NSArray *)arg2;

@optional
- (void)stickerViewerControllerDidClose:(SOStickerViewerController *)arg1;
- (void)stickerViewerControllerWillShow:(SOStickerViewerController *)arg1;
@end


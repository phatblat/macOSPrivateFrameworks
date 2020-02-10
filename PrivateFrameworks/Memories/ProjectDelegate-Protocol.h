//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSImage, NSURL, Project;

@protocol ProjectDelegate
- (void)coordinateRenameFrom:(NSURL *)arg1 to:(NSURL *)arg2 renameHandler:(void (^)(void))arg3;
- (void)coordinateRemove:(void (^)(void))arg1;
- (void)coordinateMove:(void (^)(void))arg1;
- (void)coordinateWrite:(void (^)(void))arg1;
- (BOOL)isInCloud;
- (NSImage *)thumbnailImageForProject:(Project *)arg1;
- (void)projectDidInvalidateSharingInfo:(Project *)arg1;
- (void)projectWasChanged:(Project *)arg1;
- (void)projectWasSaved:(Project *)arg1;
@end

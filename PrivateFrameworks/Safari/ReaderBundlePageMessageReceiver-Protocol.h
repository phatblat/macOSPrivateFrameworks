//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@protocol ReaderBundlePageMessageReceiver <NSObject>
- (void)snapshotVisibleContentsWithMaximumSize:(struct CGSize)arg1 requestIdentifier:(unsigned long long)arg2;
- (void)setReaderUseSmoothScrolling:(BOOL)arg1;
- (void)setReaderScrollTop:(double)arg1;
- (void)setIsInStickyMode:(BOOL)arg1;
- (void)setIsViewingArchive:(BOOL)arg1;
- (void)setCanUseCredentialStorage:(BOOL)arg1;
- (void)setReaderConfiguration:(NSDictionary *)arg1;
- (void)setInitialArticleScrollPosition:(NSDictionary *)arg1;
- (void)getPrintingFrame;
- (void)stopLoadingNextPage;
- (void)loadNewReaderArticle;
- (void)readerWillEnterBackground;
- (void)readerWillBecomeVisible;
@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/PDTimeNode.h>

@class PDAnimationTarget;

@interface PDMediaNode : PDTimeNode
{
    PDAnimationTarget *mTarget;
    BOOL mIsMuted;
    BOOL mIsShowWhenStopped;
    long long mNumberOfSlides;
    long long mVolume;
}

- (void).cxx_destruct;
- (void)setVolume:(long long)arg1;
- (long long)volume;
- (void)setNumberOfSlides:(long long)arg1;
- (long long)numberOfSlides;
- (void)setIsShowWhenStopped:(BOOL)arg1;
- (BOOL)isShowWhenStopped;
- (void)setIsMuted:(BOOL)arg1;
- (BOOL)isMuted;
- (void)setTarget:(id)arg1;
- (id)target;
- (id)init;

@end


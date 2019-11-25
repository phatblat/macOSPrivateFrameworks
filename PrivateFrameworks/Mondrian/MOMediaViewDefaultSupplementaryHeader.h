//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Mondrian/MOMediaViewSupplementary.h>

@class NSTextField;

@interface MOMediaViewDefaultSupplementaryHeader : MOMediaViewSupplementary
{
    NSTextField *_titleTextField;
    NSTextField *_subtitleTextField;
}

+ (struct CGSize)defaultSize;
@property(readonly, nonatomic) NSTextField *subtitleTextField; // @synthesize subtitleTextField=_subtitleTextField;
@property(readonly, nonatomic) NSTextField *titleTextField; // @synthesize titleTextField=_titleTextField;
- (void).cxx_destruct;
- (void)updateWithMediaSection:(id)arg1;
- (void)prepareForRecycling;
- (void)prepareForReuse;
- (void)setOrientation:(unsigned long long)arg1;
- (void)layout;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)MOMediaViewDefaultSupplementaryHeaderCommonInit;

@end


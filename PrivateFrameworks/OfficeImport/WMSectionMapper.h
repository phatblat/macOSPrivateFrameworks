//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/CMMapper.h>

@class WDSection;

@interface WMSectionMapper : CMMapper
{
    WDSection *wdSection;
    float mTopMargin;
    float mLeftMargin;
    BOOL mBreakAtStart;
    BOOL mBreakAtEnd;
    BOOL mIsTitlePage;
}

+ (BOOL)isContentEmpty:(id)arg1;
- (void).cxx_destruct;
- (float)leftMargin;
- (void)setLeftMargin:(float)arg1;
- (float)topMargin;
- (void)setTopMargin:(float)arg1;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (void)MapSectionStyleAt:(id)arg1;
- (id)initWithWDSection:(id)arg1 breakAtStart:(BOOL)arg2 breakAtEnd:(BOOL)arg3 parent:(id)arg4;
- (void)mapFooterAt:(id)arg1 withState:(id)arg2;
- (void)mapHeaderAt:(id)arg1 withState:(id)arg2;

@end


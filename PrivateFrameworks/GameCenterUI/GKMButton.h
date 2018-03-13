//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSButton.h"

@class GKUITheme;

@interface GKMButton : NSButton
{
    GKUITheme *_theme;
}

+ (Class)cellClass;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct NSEdgeInsets)alignmentRectInsets;
@property(nonatomic) int buttonKind;
@property(retain, nonatomic) GKUITheme *theme; // @synthesize theme=_theme;
- (void)_gkConfigForNavbar;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithButtonKind:(int)arg1 theme:(id)arg2;
- (id)initWithButtonKind:(int)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

@end


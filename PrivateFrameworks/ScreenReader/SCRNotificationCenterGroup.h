//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ScreenReader/SCRGroup.h>

__attribute__((visibility("hidden")))
@interface SCRNotificationCenterGroup : SCRGroup
{
    BOOL __isSiriCardView;
}

@property(nonatomic, setter=_setIsSiriCardView:) BOOL _isSiriCardView; // @synthesize _isSiriCardView=__isSiriCardView;
- (BOOL)showRect:(struct CGRect)arg1;
- (BOOL)shouldFocusOntoChild:(id)arg1;
- (id)initWithUIElement:(id)arg1 parent:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSLabelViewCell.h"

__attribute__((visibility("hidden")))
@interface FI_TLabelViewCell : NSLabelViewCell
{
    unsigned long long _whichFavoriteTagsWillRemove;
    _Bool _forApplyingTags;
}

@property(nonatomic) _Bool forApplyingTags; // @synthesize forApplyingTags=_forApplyingTags;
@property(nonatomic) unsigned long long whichFavoriteTagsWillRemove; // @synthesize whichFavoriteTagsWillRemove=_whichFavoriteTagsWillRemove;
- (void)_drawPart:(long long)arg1 withFrame:(struct CGRect)arg2;
- (void)drawBackgroundForPart:(long long)arg1 rect:(struct CGRect)arg2;
- (struct CGRect)part:(long long)arg1 boundsWithFrame:(struct CGRect)arg2;
- (struct CGRect)_boundsForLabel:(id)arg1 withFrame:(struct CGRect)arg2;
- (id)_nameForLabelPart:(long long)arg1;
- (_Bool)partWillRemoveATag:(long long)arg1;
- (long long)_partAtPoint:(struct CGPoint)arg1 inFrame:(struct CGRect)arg2;
- (unsigned long long)selectedFavoriteTags;
- (void)setSelectedFavoriteTags:(unsigned long long)arg1;
- (long long)favoriteValue;

@end


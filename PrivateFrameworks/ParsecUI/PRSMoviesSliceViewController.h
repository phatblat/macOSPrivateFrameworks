//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ParsecUI/PRSSliceViewController.h>

@class NSArray, NSLayoutManager, NSTextContainer, NSTextStorage;

@interface PRSMoviesSliceViewController : PRSSliceViewController
{
    NSArray *_movies;
    NSTextStorage *_textStorageForLayout;
    NSLayoutManager *_layoutManagerForLayout;
    NSTextContainer *_textContainerForLayout;
}

@property(retain) NSTextContainer *textContainerForLayout; // @synthesize textContainerForLayout=_textContainerForLayout;
@property(retain) NSLayoutManager *layoutManagerForLayout; // @synthesize layoutManagerForLayout=_layoutManagerForLayout;
@property(retain) NSTextStorage *textStorageForLayout; // @synthesize textStorageForLayout=_textStorageForLayout;
@property(readonly) NSArray *movies; // @synthesize movies=_movies;
- (void).cxx_destruct;
- (void)openMovie:(id)arg1;
- (void)openMovieError;
- (id)truncateAttrString:(id)arg1 width:(double)arg2 maxLines:(unsigned long long)arg3;
- (unsigned long long)characterIndexToTruncateAttrString:(id)arg1 width:(double)arg2 maxLines:(unsigned long long)arg3;
- (unsigned long long)characterIndexOfBreakInString:(id)arg1 atOrBeforeCharacterIndex:(unsigned long long)arg2;
- (void)_makeTextObjectsForLayout;
- (id)fullSubtitleAttributedStringForMovie:(id)arg1 view:(id)arg2;
- (id)subtitleTextViewMinHeightConstraintAtIndex:(unsigned long long)arg1;
- (id)subtitleTextViewAtIndex:(unsigned long long)arg1;
- (id)titleTextFieldAtIndex:(unsigned long long)arg1;
- (id)posterImageViewAtIndex:(unsigned long long)arg1;
- (unsigned long long)columnCount;
- (id)moviesSliceView;
- (void)syncAttributes;
- (double)height;
- (BOOL)handleMouseUp:(id)arg1 alternatePunchout:(id)arg2;
- (void)_sendAction:(SEL)arg1 to:(id)arg2 from:(id)arg3;
- (void)awakeFromNib;
- (id)initWithMovies:(id)arg1 range:(struct _NSRange *)arg2 forCardSection:(id)arg3;

@end


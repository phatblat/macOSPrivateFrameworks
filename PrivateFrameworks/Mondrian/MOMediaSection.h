//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSAttributedString, NSString;

@interface MOMediaSection : NSObject <NSCopying>
{
    BOOL _reloading;
    BOOL _needsReload;
    NSString *_title;
    NSString *_subtitle;
    NSString *_alternateSupertitle;
    NSString *_alternateTitle;
    NSString *_alternateSubtitle;
    NSAttributedString *_attributedTitle;
    NSAttributedString *_attributedSubtitle;
    id <MOMediaSectionFormattingDelegate> _formattingDelegate;
}

@property BOOL needsReload; // @synthesize needsReload=_needsReload;
@property(nonatomic) __weak id <MOMediaSectionFormattingDelegate> formattingDelegate; // @synthesize formattingDelegate=_formattingDelegate;
@property(copy, nonatomic) NSAttributedString *attributedSubtitle; // @synthesize attributedSubtitle=_attributedSubtitle;
@property(copy, nonatomic) NSAttributedString *attributedTitle; // @synthesize attributedTitle=_attributedTitle;
@property(copy, nonatomic) NSString *alternateSubtitle; // @synthesize alternateSubtitle=_alternateSubtitle;
@property(copy, nonatomic) NSString *alternateTitle; // @synthesize alternateTitle=_alternateTitle;
@property(copy, nonatomic) NSString *alternateSupertitle; // @synthesize alternateSupertitle=_alternateSupertitle;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)invalidate;
- (void)_reloadPropertiesIfNeeded;
- (void)_reloadProperties;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

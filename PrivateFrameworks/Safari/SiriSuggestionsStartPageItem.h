//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSViewController<SiriSuggestionsStartPageItemHostedViewControllerProtocol>;

__attribute__((visibility("hidden")))
@interface SiriSuggestionsStartPageItem : NSObject
{
    BOOL _usesCompactAppearance;
    NSViewController<SiriSuggestionsStartPageItemHostedViewControllerProtocol> *_hostedViewController;
    double _headerBottomMargin;
    id <SiriSuggestionsStartPageItemDelegate> _delegate;
}

@property(nonatomic) __weak id <SiriSuggestionsStartPageItemDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double headerBottomMargin; // @synthesize headerBottomMargin=_headerBottomMargin;
@property(nonatomic) BOOL usesCompactAppearance; // @synthesize usesCompactAppearance=_usesCompactAppearance;
@property(readonly, nonatomic) NSViewController<SiriSuggestionsStartPageItemHostedViewControllerProtocol> *hostedViewController; // @synthesize hostedViewController=_hostedViewController;
- (void).cxx_destruct;
@property(readonly, nonatomic) double expandedHeight;
@property(readonly, nonatomic) double collapsedHeight;
@property(readonly, nonatomic) BOOL supportsCollapsing;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, copy, nonatomic) NSString *title;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithViewController:(id)arg1;

@end


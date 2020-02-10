//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, NSURL, SFCard, SFCardSection, SFSearchResult;

@interface SearchUIRowModel : NSObject
{
    BOOL _isTappable;
    BOOL _isDraggable;
    NSArray *_results;
    SFSearchResult *_identifyingResult;
    SFCardSection *_cardSection;
    NSArray *_punchouts;
    NSArray *_contactIdentifiers;
    Class _cellViewClass;
    SFCard *_nextCard;
    double _leadingSeparatorImageInset;
    unsigned long long _queryId;
    NSString *_dragTitle;
    NSString *_dragSubtitle;
    NSString *_dragText;
    NSURL *_dragURL;
    NSString *_dragAppBundleID;
}

@property(readonly, nonatomic) NSString *dragAppBundleID; // @synthesize dragAppBundleID=_dragAppBundleID;
@property(readonly, nonatomic) NSURL *dragURL; // @synthesize dragURL=_dragURL;
@property(readonly, nonatomic) NSString *dragText; // @synthesize dragText=_dragText;
@property(readonly, nonatomic) NSString *dragSubtitle; // @synthesize dragSubtitle=_dragSubtitle;
@property(readonly, nonatomic) NSString *dragTitle; // @synthesize dragTitle=_dragTitle;
@property(readonly, nonatomic) BOOL isDraggable; // @synthesize isDraggable=_isDraggable;
@property(readonly, nonatomic) unsigned long long queryId; // @synthesize queryId=_queryId;
@property(readonly, nonatomic) double leadingSeparatorImageInset; // @synthesize leadingSeparatorImageInset=_leadingSeparatorImageInset;
@property(readonly, nonatomic) BOOL isTappable; // @synthesize isTappable=_isTappable;
@property(readonly, nonatomic) SFCard *nextCard; // @synthesize nextCard=_nextCard;
@property(readonly, nonatomic) Class cellViewClass; // @synthesize cellViewClass=_cellViewClass;
@property(readonly, nonatomic) NSArray *contactIdentifiers; // @synthesize contactIdentifiers=_contactIdentifiers;
@property(readonly, nonatomic) NSArray *punchouts; // @synthesize punchouts=_punchouts;
@property(retain, nonatomic) SFCardSection *cardSection; // @synthesize cardSection=_cardSection;
@property(retain, nonatomic) SFSearchResult *identifyingResult; // @synthesize identifyingResult=_identifyingResult;
@property(retain, nonatomic) NSArray *results; // @synthesize results=_results;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL isQuerySuggestion;
@property(readonly, nonatomic) NSString *reuseIdentifier;
@property(readonly, nonatomic) int separatorStyle;
- (id)initWithResults:(id)arg1 cardSection:(id)arg2 queryId:(unsigned long long)arg3;
- (id)initWithResults:(id)arg1;
- (id)initWithCardSection:(id)arg1 queryId:(unsigned long long)arg2;
- (id)initWithResult:(id)arg1 cardSection:(id)arg2 queryId:(unsigned long long)arg3;
- (id)initWithResult:(id)arg1;

@end

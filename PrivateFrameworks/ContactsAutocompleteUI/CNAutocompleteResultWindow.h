//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ContactsAutocompleteUI/CNAutocompleteResultWindowBase.h>

#import "CNAutocompleteResultTableViewDelegate.h"

@class NSArray, NSMutableDictionary, NSString;

@interface CNAutocompleteResultWindow : CNAutocompleteResultWindowBase <CNAutocompleteResultTableViewDelegate>
{
    BOOL _onlyEmailFormat;
    NSArray *_autocompleteResults;
    NSMutableDictionary *_prefixToResults;
    NSMutableDictionary *_primaryResults;
    NSMutableDictionary *_suggestedResults;
}

+ (BOOL)sourceTypeIsConsideredASuggestion:(unsigned long long)arg1;
@property(retain) NSMutableDictionary *suggestedResults; // @synthesize suggestedResults=_suggestedResults;
@property(retain) NSMutableDictionary *primaryResults; // @synthesize primaryResults=_primaryResults;
@property(retain) NSMutableDictionary *prefixToResults; // @synthesize prefixToResults=_prefixToResults;
@property BOOL onlyEmailFormat; // @synthesize onlyEmailFormat=_onlyEmailFormat;
@property(copy, nonatomic) NSArray *autocompleteResults; // @synthesize autocompleteResults=_autocompleteResults;
- (void).cxx_destruct;
- (void)logDiagnosticForRow:(long long)arg1;
- (id)viewForResult:(id)arg1;
- (id)viewForRow:(long long)arg1;
- (void)tableView:(id)arg1 didClickTableColumn:(id)arg2;
- (BOOL)selectAutocompleteResultForString:(id)arg1;
- (id)resultForString:(id)arg1;
- (id)resultsAsPrefixStringMatches;
- (void)setAutocompleteResults:(id)arg1 forFetchRequest:(id)arg2;
- (BOOL)includeAddressForPrefixMatching;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


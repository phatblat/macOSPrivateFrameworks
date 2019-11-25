//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MMHTMLParser, MMSpanParser;

@interface MMParser : NSObject
{
    unsigned long long _extensions;
    MMHTMLParser *_htmlParser;
    MMSpanParser *_spanParser;
}

@property(readonly, nonatomic) MMSpanParser *spanParser; // @synthesize spanParser=_spanParser;
@property(readonly, nonatomic) MMHTMLParser *htmlParser; // @synthesize htmlParser=_htmlParser;
@property(readonly, nonatomic) unsigned long long extensions; // @synthesize extensions=_extensions;
- (void).cxx_destruct;
- (void)_updateLinksFromDefinitionsInDocument:(id)arg1;
- (id)_parseTableWithScanner:(id)arg1;
- (id)_parseTableRowWithScanner:(id)arg1 columns:(id)arg2;
- (id)_parseTableHeaderWithScanner:(id)arg1;
- (id)_parseParagraphWithScanner:(id)arg1;
- (id)_parseLinkDefinitionWithScanner:(id)arg1;
- (id)_parseListWithScanner:(id)arg1;
- (id)_parseListItemWithScanner:(id)arg1 listType:(long long)arg2;
- (BOOL)_parseListMarkerWithScanner:(id)arg1 listType:(long long)arg2;
- (id)_parseHorizontalRuleWithScanner:(id)arg1;
- (id)_parseFencedCodeBlockWithScanner:(id)arg1;
- (id)_parseCodeBlockWithScanner:(id)arg1;
- (id)_parseCodeLinesWithScanner:(id)arg1;
- (id)_parseBlockquoteWithScanner:(id)arg1;
- (id)_parseUnderlinedHeaderWithScanner:(id)arg1;
- (id)_parsePrefixHeaderWithScanner:(id)arg1;
- (id)_parseHTMLWithScanner:(id)arg1;
- (id)_parseBlockElementWithScanner:(id)arg1;
- (id)_parseElementsWithScanner:(id)arg1;
- (id)_removeTabsFromString:(id)arg1;
- (void)_addTextLineToElement:(id)arg1 withScanner:(id)arg2;
- (id)parseMarkdown:(id)arg1 error:(id *)arg2;
- (id)initWithExtensions:(unsigned long long)arg1;

@end


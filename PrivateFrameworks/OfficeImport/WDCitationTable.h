//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, WDDocument;

@interface WDCitationTable : NSObject
{
    WDDocument *mDocument;
    NSMutableDictionary *mCitations;
}

- (void).cxx_destruct;
- (id)description;
- (id)citationIDs;
- (void)addCitation:(id)arg1 forID:(id)arg2;
- (id)citationFor:(id)arg1;
- (unsigned long long)count;
- (id)initWithDocument:(id)arg1;
- (id)document;

@end

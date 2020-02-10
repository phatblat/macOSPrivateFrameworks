//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CRKTablePrinting.h"

@class CRKTable, NSArray;

@interface CRKHeaderTable : NSObject <CRKTablePrinting>
{
    CRKTable *_table;
    NSArray *_headers;
    NSArray *_keyPaths;
    NSArray *_objects;
}

@property(readonly, copy, nonatomic) NSArray *objects; // @synthesize objects=_objects;
@property(readonly, copy, nonatomic) NSArray *keyPaths; // @synthesize keyPaths=_keyPaths;
@property(readonly, copy, nonatomic) NSArray *headers; // @synthesize headers=_headers;
- (void).cxx_destruct;
- (id)tableString;
@property(readonly, nonatomic) CRKTable *table; // @synthesize table=_table;
- (id)crk_JSONRepresentationWithPrettyPrinting:(BOOL)arg1 sortKeys:(BOOL)arg2;
- (id)initWithHeaders:(id)arg1 keyPaths:(id)arg2 objects:(id)arg3;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDTable.h>

@class LiKeyPath;

@interface RDKeywordTable : RDTable
{
    LiKeyPath *_nameKeyPath;
    LiKeyPath *_searchNameKeyPath;
    LiKeyPath *_parentIdKeyPath;
    LiKeyPath *_hasChildrenKeyPath;
    LiKeyPath *_shortcutKeyPath;
}

+ (SEL)deletedModelIdsMulticasterSelector;
+ (SEL)updatedModelKeyPathsMulticasterSelector;
+ (SEL)createdModelMulticasterSelector;
+ (id)tableClassName;
+ (id)tableName;
+ (id)modelName;
+ (Class)modelClass;
@property(readonly, nonatomic) LiKeyPath *shortcutKeyPath; // @synthesize shortcutKeyPath=_shortcutKeyPath;
@property(readonly, nonatomic) LiKeyPath *hasChildrenKeyPath; // @synthesize hasChildrenKeyPath=_hasChildrenKeyPath;
@property(readonly, nonatomic) LiKeyPath *parentIdKeyPath; // @synthesize parentIdKeyPath=_parentIdKeyPath;
@property(readonly, nonatomic) LiKeyPath *searchNameKeyPath; // @synthesize searchNameKeyPath=_searchNameKeyPath;
@property(readonly, nonatomic) LiKeyPath *nameKeyPath; // @synthesize nameKeyPath=_nameKeyPath;
- (void).cxx_destruct;
- (void)declareProperties;
- (id)initWithTableId:(unsigned long long)arg1 tableType:(unsigned char)arg2 withLibrary:(id)arg3;
- (id)notifyUpdateKeyPathAtoms;
- (unsigned long long *)faultedKeyPath;
- (id)iLMBPropertyPaths;
- (unsigned long long)searchIndexTokenTypeForKeyPath:(id)arg1;

@end


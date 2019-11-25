//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, _NSCollectionLayoutVisualTreeNode;

@interface _NSCollectionLayoutVisualFormatTreeParser : NSObject
{
    _NSCollectionLayoutVisualTreeNode *_root;
    NSArray *_visualFormats;
}

+ (id)treeParserWithVisualFormats:(id)arg1;
@property(copy, nonatomic) NSArray *visualFormats; // @synthesize visualFormats=_visualFormats;
@property(retain, nonatomic) _NSCollectionLayoutVisualTreeNode *root; // @synthesize root=_root;
- (void).cxx_destruct;
- (id)_normalizeFractionsOfLayoutVFLItemsForItems:(id)arg1;
- (id)_nodeForParser:(id)arg1 withParserDict:(id)arg2 size:(id)arg3;
- (id)_parse;
- (void)_visitChildrenOfNodeDepthFirst:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateTreeNodesDepthFirstUsingBlock:(CDUnknownBlockType)arg1;
- (id)description;
- (id)initWithVisualFormats:(id)arg1;

@end


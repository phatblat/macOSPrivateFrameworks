//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSIndexPath.h"

@interface GKMappedIndexPath : NSIndexPath
{
    id _tag;
    NSIndexPath *_sourceIndexPath;
}

+ (id)indexPathForItem:(long long)arg1 inSection:(long long)arg2 fromSourceIndexPath:(id)arg3 withTag:(id)arg4;
@property(copy, nonatomic) NSIndexPath *sourceIndexPath; // @synthesize sourceIndexPath=_sourceIndexPath;
@property(retain, nonatomic) id tag; // @synthesize tag=_tag;
- (id)description;
- (void)dealloc;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface _NUIViewContainerViewInfo : NSObject
{
    struct nui_size_cache _sizeCache;
    struct NSEdgeInsets _customAlignmentInsets;
    double _customTopBaseline;
    double _customBottomBaseline;
    struct {
        unsigned int baselineRelativeInsets:1;
        unsigned int allowFastBaselines:1;
        unsigned int alsoInvalidateSuperview:1;
        unsigned int neverCacheSize:1;
    } _flags;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)init;

@end

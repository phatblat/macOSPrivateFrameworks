//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface RenderObject : NSObject
{
    struct RenderObject _renderObject;
    NSArray *_children;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *heightString;
@property(readonly, nonatomic) NSString *widthString;
@property(readonly, nonatomic) NSString *positionString;
@property(readonly, nonatomic) NSString *absolutePositionString;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSArray *children;
- (id)initWithWKRenderObject:(const struct RenderObject *)arg1;

@end


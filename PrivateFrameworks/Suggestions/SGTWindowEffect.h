//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSWindow;

__attribute__((visibility("hidden")))
@interface SGTWindowEffect : NSObject
{
    unsigned int _effectID;
    NSWindow *_window;
    CDUnknownBlockType _preparationBlock;
    CDUnknownBlockType _completionBlock;
}

@property(copy) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(copy) CDUnknownBlockType preparationBlock; // @synthesize preparationBlock=_preparationBlock;
@property unsigned int effectID; // @synthesize effectID=_effectID;
@property(readonly) NSWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;
- (void)done;
- (void)abort;
- (void)invoke;
- (id)prepare;
- (id)initWithWindow:(id)arg1;

@end


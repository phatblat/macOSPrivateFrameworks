//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Slideshows/MCAction.h>

@interface MRMCBlockAction : MCAction
{
    CDUnknownBlockType _block;
}

+ (id)blockActionWithBlock:(CDUnknownBlockType)arg1;
@property(copy) CDUnknownBlockType block; // @synthesize block=_block;
- (id)description;
- (void)_copySelfToSnapshot:(id)arg1;
- (id)xmlElement;
- (id)imprint;
- (void)demolish;
- (id)initWithImprint:(id)arg1;

@end


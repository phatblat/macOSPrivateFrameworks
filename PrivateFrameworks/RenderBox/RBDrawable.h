//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class RBDevice;

@interface RBDrawable : NSObject
{
    struct unique_ptr<RB::Drawable, std::__1::default_delete<RB::Drawable>> _drawable;
    int _initialState;
    RBDevice *_device;
    unsigned long long _pixelFormat;
    id <RBDrawableDelegate> _delegate;
    id <MTLTexture> _texture;
    struct CGSize _size;
    CDStruct_0b1c536a _clearColor;
}

@property(retain, nonatomic) id <MTLTexture> texture; // @synthesize texture=_texture;
@property(nonatomic) CDStruct_0b1c536a clearColor; // @synthesize clearColor=_clearColor;
@property(nonatomic) int initialState; // @synthesize initialState=_initialState;
@property(nonatomic) __weak id <RBDrawableDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long pixelFormat; // @synthesize pixelFormat=_pixelFormat;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(readonly, nonatomic) RBDevice *device; // @synthesize device=_device;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) double GPUDuration;
- (void)dumpTexture:(id)arg1 name:(id)arg2;
- (void)finish;
- (void)renderDisplayList:(id)arg1 flags:(unsigned int)arg2;
- (id)initWithDevice:(id)arg1;

@end


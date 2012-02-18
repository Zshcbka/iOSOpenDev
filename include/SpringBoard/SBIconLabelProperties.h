/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBUnknownSuperclass.h"
#import "NSCopying.h"

@class NSString;

@interface SBIconLabelProperties : SBUnknownSuperclass <NSCopying> {
	NSString *_text;	// 4 = 0x4
	NSString *_labelClassString;	// 8 = 0x8
	BOOL _ellipsize;	// 12 = 0xc
	BOOL _inDock;	// 13 = 0xd
	BOOL _onWallpaper;	// 14 = 0xe
	CGSize _size;	// 16 = 0x10
	BOOL _appearsInDock;	// 24 = 0x18
	BOOL _appearsOnWallpaper;	// 25 = 0x19
}
@property(retain, nonatomic) NSString *text;	// G=0x1a320d; S=0x1a377d; @synthesize=_text
@property(assign, nonatomic) BOOL ellipsize;	// G=0x1a31ed; S=0x1a31fd; @synthesize=_ellipsize
@property(assign, nonatomic) BOOL appearsInDock;	// G=0x1a31cd; S=0x1a31dd; @synthesize=_appearsInDock
@property(assign, nonatomic) BOOL appearsOnWallpaper;	// G=0x1a31ad; S=0x1a31bd; @synthesize=_appearsOnWallpaper
@property(assign, nonatomic) CGSize size;	// G=0x1a3181; S=0x1a3199; @synthesize=_size
@property(assign, nonatomic) Class labelClass;	// G=0x1a3709; S=0x1a324d; 
@property(readonly, retain) NSString *labelClassString;	// G=0x1a3171; converted property
// declared property setter: - (void)setLabelClass:(Class)aClass;	// 0x1a324d
// declared property getter: - (Class)labelClass;	// 0x1a3709
// converted property getter: - (id)labelClassString;	// 0x1a3171
- (void)dealloc;	// 0x1a371d
- (BOOL)isEqual:(id)equal;	// 0x1a387d
- (unsigned)hash;	// 0x1a32b1
- (id)copyWithZone:(NSZone *)zone;	// 0x1a3391
- (id)description;	// 0x1a37a5
// declared property getter: - (CGSize)size;	// 0x1a3181
// declared property setter: - (void)setSize:(CGSize)size;	// 0x1a3199
// declared property getter: - (BOOL)appearsOnWallpaper;	// 0x1a31ad
// declared property setter: - (void)setAppearsOnWallpaper:(BOOL)wallpaper;	// 0x1a31bd
// declared property getter: - (BOOL)appearsInDock;	// 0x1a31cd
// declared property setter: - (void)setAppearsInDock:(BOOL)dock;	// 0x1a31dd
// declared property getter: - (BOOL)ellipsize;	// 0x1a31ed
// declared property setter: - (void)setEllipsize:(BOOL)ellipsize;	// 0x1a31fd
// declared property getter: - (id)text;	// 0x1a320d
// declared property setter: - (void)setText:(id)text;	// 0x1a377d
@end
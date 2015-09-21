//
//  RetailBankingRewardsCatalog.h
//  AnyPresence SDK
//

/*!
 @header RetailBankingRewardsCatalog
 @abstract RetailBankingRewardsCatalog class
 */

#import "APObject.h"
#import "Typedefs.h"

/*!
 @class RetailBankingRewardsCatalog
 @abstract Generated model object: RetailBankingRewardsCatalog.
 @discussion Use @link //apple_ref/occ/cat/RetailBankingRewardsCatalog(Remote) @/link to add CRUD capabilities.
 The @link //apple_ref/occ/instp/RetailBankingRewardsCatalog/id @/link field is set as primary key (see @link //apple_ref/occ/cat/APObject(RemoteConfig) @/link) in [self init].
 */
@interface RetailBankingRewardsCatalog : APObject {
}

/*!
 @method dataSource
 @abstract Returns the data source class associated with a RetailBankingRewardsCatalog.
 @result Class representing the data source associated with a RetailBankingRewardsCatalog.
 */
+ (Class)dataSource;

/*!
 @var id
 @abstract Generated model property: id.
 @discussion Primary key. Generated on the server.
 */
@property (nonatomic, strong) NSNumber * id;

/*!
 @var itemCategory
 @abstract Generated model property: item_category.
 */
@property (nonatomic, strong) NSString * itemCategory;

/*!
 @var itemCode
 @abstract Generated model property: item_code.
 */
@property (nonatomic, strong) NSString * itemCode;

/*!
 @var itemDescription
 @abstract Generated model property: item_description.
 */
@property (nonatomic, strong) NSString * itemDescription;

/*!
 @var itemName
 @abstract Generated model property: item_name.
 */
@property (nonatomic, strong) NSString * itemName;

/*!
 @var pointRequired
 @abstract Generated model property: point_required.
 */
@property (nonatomic, strong) NSNumber * pointRequired;

/*!
 @var pointsAvailable
 @abstract Generated model property: points_available.
 */
@property (nonatomic, strong) NSNumber * pointsAvailable;

@end

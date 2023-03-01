#ifndef WARRIORARMY_DESTROYABLE
#define WARRIORARMY_DESTROYABLE

namespace Lifecycle {

	class IDestroyable {

	public:
		virtual void OnDestroy() = 0;
	};

}

#endif // !WARRIORARMY_DESTROYABLE